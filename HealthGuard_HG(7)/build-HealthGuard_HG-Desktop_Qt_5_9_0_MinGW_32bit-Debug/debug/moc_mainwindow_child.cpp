/****************************************************************************
** Meta object code from reading C++ file 'mainwindow_child.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../HealthGuard_HG/mainwindow_child.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow_child.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_child_t {
    QByteArrayData data[8];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_child_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_child_t qt_meta_stringdata_MainWindow_child = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MainWindow_child"
QT_MOC_LITERAL(1, 17, 12), // "receiveData2"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "data"
QT_MOC_LITERAL(4, 36, 23), // "on_btn_sndquest_clicked"
QT_MOC_LITERAL(5, 60, 14), // "slot_readyRead"
QT_MOC_LITERAL(6, 75, 20), // "on_btn_shuju_clicked"
QT_MOC_LITERAL(7, 96, 11) // "slot_result"

    },
    "MainWindow_child\0receiveData2\0\0data\0"
    "on_btn_sndquest_clicked\0slot_readyRead\0"
    "on_btn_shuju_clicked\0slot_result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow_child[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow_child::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow_child *_t = static_cast<MainWindow_child *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveData2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_btn_sndquest_clicked(); break;
        case 2: _t->slot_readyRead(); break;
        case 3: _t->on_btn_shuju_clicked(); break;
        case 4: _t->slot_result(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow_child::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow_child.data,
      qt_meta_data_MainWindow_child,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow_child::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow_child::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow_child.stringdata0))
        return static_cast<void*>(const_cast< MainWindow_child*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow_child::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
