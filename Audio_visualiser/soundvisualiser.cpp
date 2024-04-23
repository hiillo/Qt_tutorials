#include "soundvisualiser.h"
#include "./ui_soundvisualiser.h"

soundVisualiser::soundVisualiser(QWidget *parent)
    : QWidget(parent)
    , m_chart(new QChart)
    , m_series(new QLineSeries)
    // , ui(new Ui::soundVisualiser)
{
    auto chartView = new QChartView(m_chart);
    m_chart->addSeries(m_series);
    ui->setupUi(this);

    auto axixX = new QValueAxis;
    axisX->setRange(0, XYSeriesIODevice::sampleCount);
    axisX->setLabelFormat("%g");
    axisX->setTitleText("Samples");

    auto axisY = new QValueAxis;
    axisY -> setRange(-1, 1);
    axisY -> setTitleText("Audio level");

    m_chart -> addAxis(axisX, Qt::AlignBottom);
    m_series -> attachAxis(axisX);
    m_chart -> addAxis(AxisY, Qt::AlignLeft);
    m_series -> attachAxis(axisY);
    m_chart -> legend()->hide();

    m_chart->setTitle("Data from the microphone (" + deviceInfo.description() + ')');

    auto mainLayout = new QVBoxLayout(this);

    mainLayout -> addWidget(chartView);

    m_audioInput = new QAudioInput(deviceInfo, this);

    QAudioFormat formatAudio;

    formatAudio.setSampleRate(8000);
    formatAudio.setChannelCount(1);

    formatAudio.setSampleFormat(QAudioFormat::UInt8);
    m_audioSourve = new QAudioSource(deviceInfo, formatAudio);

    m_audioSource -> setBufferSize(200);

    m_device - new XYSeriesIODevice(m_series, this);
    m_device -> open(QIODevice::WriteOnly);



}

soundVisualiser::~soundVisualiser()
{
    delete ui;
}
