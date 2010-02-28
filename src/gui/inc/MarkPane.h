/*
 * Copyright 2010  OSLL osll@osll.spb.ru
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * 3. The name of the author may not be used to endorse or promote
 *    products derived from this software without specific prior written
 *    permission.
 *
 * The advertising clause requiring mention in adverts must never be included.
 */
/*!
 * \file MarkPane.h
 * \brief Header of MarkPane
 * \todo add comment here
 *
 * File description
 *
 * PROJ: OSLL/geo2tag
 * ---------------------------------------------------------------- */


#ifndef _MarkPane_H_D511DD50_5236_4D1D_84DB_72BE3E938E3E_INCLUDED_
#define _MarkPane_H_D511DD50_5236_4D1D_84DB_72BE3E938E3E_INCLUDED_

#include <QtGui/QWidget>
#include <QDialog>
#include "MarkTableDelegat.h"
#include <QMessageBox>
#include "DbSession.h"
//#include "MarkDetailsDialog.h"

namespace GUI
{
/*!
   * Class description. May use HTML formatting
   *
   */
  class MarkPane : public QWidget
  {
    ListView *m_list;
    Q_OBJECT;

  public:

    MarkPane(QWidget * parent);

    virtual ~MarkPane()
    {
    }
  
  public slots:

    void refresh(CHandlePtr<common::Channel> channel);
    
    void updateCurrentChannelRadius();

    void showUrl(const QModelIndex &index);

  private:  

    MarkPane(const MarkPane& obj);
    MarkPane& operator=(const MarkPane& obj);

  }; // class MarkPane
  
} // namespace GUI

#endif //_MarkPane_H_D511DD50_5236_4D1D_84DB_72BE3E938E3E_INCLUDED_

/* ===[ End of file ]=== */
