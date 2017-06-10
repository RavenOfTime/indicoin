/****************************************************************************
** Meta object code from reading C++ file 'coincontroldialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/coincontroldialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coincontroldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CoinControlDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   18,   18,   18, 0x08,
      50,   18,   18,   18, 0x08,
      63,   18,   18,   18, 0x08,
      75,   18,   18,   18, 0x08,
      89,   18,   18,   18, 0x08,
     111,   18,   18,   18, 0x08,
     131,   18,   18,   18, 0x08,
     149,   18,   18,   18, 0x08,
     164,   18,   18,   18, 0x08,
     184,   18,   18,   18, 0x08,
     201,   18,   18,   18, 0x08,
     221,   18,   18,   18, 0x08,
     242,   18,   18,   18, 0x08,
     260,   18,   18,   18, 0x08,
     280,   18,   18,   18, 0x08,
     302,  300,   18,   18, 0x08,
     340,   18,   18,   18, 0x08,
     366,   18,   18,   18, 0x08,
     390,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CoinControlDialog[] = {
    "CoinControlDialog\0\0beforeClose()\0"
    "showMenu(QPoint)\0copyAmount()\0copyLabel()\0"
    "copyAddress()\0copyTransactionHash()\0"
    "clipboardQuantity()\0clipboardAmount()\0"
    "clipboardFee()\0clipboardAfterFee()\0"
    "clipboardBytes()\0clipboardPriority()\0"
    "clipboardLowOutput()\0clipboardChange()\0"
    "radioTreeMode(bool)\0radioListMode(bool)\0"
    ",\0viewItemChanged(QTreeWidgetItem*,int)\0"
    "headerSectionClicked(int)\0"
    "on_buttonBox_accepted()\0"
    "buttonSelectAllClicked()\0"
};

void CoinControlDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CoinControlDialog *_t = static_cast<CoinControlDialog *>(_o);
        switch (_id) {
        case 0: _t->beforeClose(); break;
        case 1: _t->showMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->copyAmount(); break;
        case 3: _t->copyLabel(); break;
        case 4: _t->copyAddress(); break;
        case 5: _t->copyTransactionHash(); break;
        case 6: _t->clipboardQuantity(); break;
        case 7: _t->clipboardAmount(); break;
        case 8: _t->clipboardFee(); break;
        case 9: _t->clipboardAfterFee(); break;
        case 10: _t->clipboardBytes(); break;
        case 11: _t->clipboardPriority(); break;
        case 12: _t->clipboardLowOutput(); break;
        case 13: _t->clipboardChange(); break;
        case 14: _t->radioTreeMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->radioListMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->viewItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->headerSectionClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_buttonBox_accepted(); break;
        case 19: _t->buttonSelectAllClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CoinControlDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CoinControlDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CoinControlDialog,
      qt_meta_data_CoinControlDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CoinControlDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CoinControlDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CoinControlDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CoinControlDialog))
        return static_cast<void*>(const_cast< CoinControlDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int CoinControlDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void CoinControlDialog::beforeClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
