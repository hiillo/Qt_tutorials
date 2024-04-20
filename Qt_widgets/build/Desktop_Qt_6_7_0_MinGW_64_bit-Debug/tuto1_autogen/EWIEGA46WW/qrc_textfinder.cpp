/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 6.7.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // C:/Users/Hillo/Downloads/coding/qt/tuto1/input.txt
  0x0,0x0,0x0,0x41,
  0x0,
  0x0,0x7,0xde,0x78,0xda,0xed,0xca,0xd1,0x9,0x0,0x20,0x8,0x5,0xc0,0x55,0xdc,
  0xa4,0x59,0x4,0x93,0x30,0x51,0xc1,0xf6,0xa7,0xd6,0x8,0xde,0xd7,0xfd,0x5c,0xe5,
  0xe1,0x93,0xc4,0x2d,0xa1,0x9b,0x78,0x8b,0xb5,0x3e,0x2c,0x5a,0x9e,0x4e,0x6b,0xba,
  0xe7,0x28,0x2c,0x2c,0x2c,0x2c,0x2c,0x2c,0xac,0x6f,0xd6,0x5,0xdb,0x97,0xed,0x29,
  
  
};

static const unsigned char qt_resource_name[] = {
  // input.txt
  0x0,0x9,
  0x7,0xc7,0xbb,0x54,
  0x0,0x69,
  0x0,0x6e,0x0,0x70,0x0,0x75,0x0,0x74,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/input.txt
  0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x8e,0xe6,0x83,0x8d,0xdd,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#if defined(__ELF__) || defined(__APPLE__)
static inline unsigned char qResourceFeatureZlib()
{
    extern const unsigned char qt_resourceFeatureZlib;
    return qt_resourceFeatureZlib;
}
#else
unsigned char qResourceFeatureZlib();
#endif

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_textfinder)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_textfinder)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_textfinder)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_textfinder)()
{
    int version = 3;
    version += QT_RCC_PREPEND_NAMESPACE(qResourceFeatureZlib());
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

#ifdef __clang__
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wexit-time-destructors"
#endif

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_textfinder)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_textfinder)(); }
   } dummy;
}

#ifdef __clang__
#   pragma clang diagnostic pop
#endif
