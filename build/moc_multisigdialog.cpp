/****************************************************************************
** Meta object code from reading C++ file 'multisigdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/multisigdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multisigdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MultisigDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   15,   16,   15, 0x0a,
      50,   15,   15,   15, 0x0a,
      58,   15,   15,   15, 0x0a,
     100,   15,   80,   15, 0x0a,
     127,   15,  111,   15, 0x0a,
     145,  139,   15,   15, 0x08,
     168,  139,   15,   15, 0x08,
     191,   15,   15,   15, 0x08,
     224,   15,   15,   15, 0x08,
     263,   15,   15,   15, 0x08,
     299,   15,   15,   15, 0x08,
     335,   15,   15,   15, 0x08,
     380,  374,   15,   15, 0x08,
     415,   15,   15,   15, 0x08,
     452,   15,   15,   15, 0x08,
     481,   15,   15,   15, 0x08,
     516,   15,   15,   15, 0x08,
     552,   15,   15,   15, 0x08,
     587,   15,   15,   15, 0x08,
     628,   15,   15,   15, 0x08,
     663,  374,   15,   15, 0x08,
     696,  374,   15,   15, 0x08,
     725,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MultisigDialog[] = {
    "MultisigDialog\0\0MultisigAddressEntry*\0"
    "addPubKey()\0clear()\0updateRemoveEnabled()\0"
    "MultisigInputEntry*\0addInput()\0"
    "SendCoinsEntry*\0addOutput()\0event\0"
    "showEvent(QShowEvent*)\0hideEvent(QHideEvent*)\0"
    "on_createAddressButton_clicked()\0"
    "on_copyMultisigAddressButton_clicked()\0"
    "on_copyRedeemScriptButton_clicked()\0"
    "on_saveRedeemScriptButton_clicked()\0"
    "on_saveMultisigAddressButton_clicked()\0"
    "entry\0removeEntry(MultisigAddressEntry*)\0"
    "on_createTransactionButton_clicked()\0"
    "on_transaction_textChanged()\0"
    "on_copyTransactionButton_clicked()\0"
    "on_pasteTransactionButton_clicked()\0"
    "on_signTransactionButton_clicked()\0"
    "on_copySignedTransactionButton_clicked()\0"
    "on_sendTransactionButton_clicked()\0"
    "removeEntry(MultisigInputEntry*)\0"
    "removeEntry(SendCoinsEntry*)\0"
    "updateAmounts()\0"
};

void MultisigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MultisigDialog *_t = static_cast<MultisigDialog *>(_o);
        switch (_id) {
        case 0: { MultisigAddressEntry* _r = _t->addPubKey();
            if (_a[0]) *reinterpret_cast< MultisigAddressEntry**>(_a[0]) = _r; }  break;
        case 1: _t->clear(); break;
        case 2: _t->updateRemoveEnabled(); break;
        case 3: { MultisigInputEntry* _r = _t->addInput();
            if (_a[0]) *reinterpret_cast< MultisigInputEntry**>(_a[0]) = _r; }  break;
        case 4: { SendCoinsEntry* _r = _t->addOutput();
            if (_a[0]) *reinterpret_cast< SendCoinsEntry**>(_a[0]) = _r; }  break;
        case 5: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 6: _t->hideEvent((*reinterpret_cast< QHideEvent*(*)>(_a[1]))); break;
        case 7: _t->on_createAddressButton_clicked(); break;
        case 8: _t->on_copyMultisigAddressButton_clicked(); break;
        case 9: _t->on_copyRedeemScriptButton_clicked(); break;
        case 10: _t->on_saveRedeemScriptButton_clicked(); break;
        case 11: _t->on_saveMultisigAddressButton_clicked(); break;
        case 12: _t->removeEntry((*reinterpret_cast< MultisigAddressEntry*(*)>(_a[1]))); break;
        case 13: _t->on_createTransactionButton_clicked(); break;
        case 14: _t->on_transaction_textChanged(); break;
        case 15: _t->on_copyTransactionButton_clicked(); break;
        case 16: _t->on_pasteTransactionButton_clicked(); break;
        case 17: _t->on_signTransactionButton_clicked(); break;
        case 18: _t->on_copySignedTransactionButton_clicked(); break;
        case 19: _t->on_sendTransactionButton_clicked(); break;
        case 20: _t->removeEntry((*reinterpret_cast< MultisigInputEntry*(*)>(_a[1]))); break;
        case 21: _t->removeEntry((*reinterpret_cast< SendCoinsEntry*(*)>(_a[1]))); break;
        case 22: _t->updateAmounts(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MultisigDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MultisigDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MultisigDialog,
      qt_meta_data_MultisigDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultisigDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultisigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultisigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultisigDialog))
        return static_cast<void*>(const_cast< MultisigDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int MultisigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
