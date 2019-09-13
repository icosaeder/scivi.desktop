#ifndef FILTERFACTORY_H
#define FILTERFACTORY_H

#include "scivi2lib_global.h"
#include <QObject>
#include <QtPlugin>
#include "filterimplementation.h"

namespace scivi {
namespace filters {

using FilterPtr = FilterImplementation*;

class SCIVI_LIBRARY_EXPORT FilterFactory: public QObject {
    Q_OBJECT
public:
    virtual ~FilterFactory() {}
    virtual FilterPtr create(QObject *parent) = 0;
};

}

}

QT_BEGIN_NAMESPACE

#define FilterFactory_iid "tools.scivi.filters.FilterFactory"

Q_DECLARE_INTERFACE(scivi::filters::FilterFactory, FilterFactory_iid)

QT_END_NAMESPACE

#endif // FILTERFACTORY_H
