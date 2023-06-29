/****************************************************************************
** Meta object code from reading C++ file 'app_website.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../HealthGuard_HG/app_website.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'app_website.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_app_website_t {
    QByteArrayData data[10];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_app_website_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_app_website_t qt_meta_stringdata_app_website = {
    {
QT_MOC_LITERAL(0, 0, 11), // "app_website"
QT_MOC_LITERAL(1, 12, 10), // "paintEvent"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "QPaintEvent*"
QT_MOC_LITERAL(4, 37, 20), // "on_btn_huoqu_clicked"
QT_MOC_LITERAL(5, 58, 15), // "slot_readyRead2"
QT_MOC_LITERAL(6, 74, 23), // "slot_item_doubleClicked"
QT_MOC_LITERAL(7, 98, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(8, 115, 27), // "on_btn_patient_info_clicked"
QT_MOC_LITERAL(9, 143, 21) // "Spo2_DemoData_produce"

    },
    "app_website\0paintEvent\0\0QPaintEvent*\0"
    "on_btn_huoqu_clicked\0slot_readyRead2\0"
    "slot_item_doubleClicked\0QTreeWidgetItem*\0"
    "on_btn_patient_info_clicked\0"
    "Spo2_DemoData_produce"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_app_website[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    2,   49,    2, 0x08 /* Private */,
       8,    0,   54,    2, 0x08 /* Private */,
       9,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void app_website::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        app_website *_t = static_cast<app_website *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 1: _t->on_btn_huoqu_clicked(); break;
        case 2: _t->slot_readyRead2(); break;
        case 3: _t->slot_item_doubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_btn_patient_info_clicked(); break;
        case 5: _t->Spo2_DemoData_produce(); break;
        default: ;
        }
    }
}

const QMetaObject app_website::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_app_website.data,
      qt_meta_data_app_website,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *app_website::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *app_website::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_app_website.stringdata0))
        return static_cast<void*>(const_cast< app_website*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int app_website::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
