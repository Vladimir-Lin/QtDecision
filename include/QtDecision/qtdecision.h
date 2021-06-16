/****************************************************************************
 *                                                                          *
 * Copyright (C) 2015 Neutrino International Inc.                           *
 *                                                                          *
 * Author : Brian Lin <lin.foxman@gmail.com>, Skype: wolfram_lin            *
 *                                                                          *
 ****************************************************************************/

#ifndef QT_DECISION_H
#define QT_DECISION_H

#include <QtInference>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_QTDECISION_LIB)
#      define Q_DECISION_EXPORT Q_DECL_EXPORT
#    else
#      define Q_DECISION_EXPORT Q_DECL_IMPORT
#    endif
#else
#    define Q_DECISION_EXPORT
#endif

namespace N
{

class Q_DECISION_EXPORT DecisionMaker   ;

class Q_DECISION_EXPORT DecisionMaker
{
  public:

    explicit DecisionMaker (void);
    virtual ~DecisionMaker (void);

  protected:

  private:

};

}

QT_END_NAMESPACE

#endif
