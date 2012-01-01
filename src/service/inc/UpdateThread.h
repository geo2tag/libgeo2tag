/*
 * Copyright 2010-2011  OSLL osll@osll.spb.ru
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
/*----------------------------------------------------------------- !
 * PROJ: OSLL/geo2tag
 * ---------------------------------------------------------------- */

#ifndef UPDATETHREAD_H
#define UPDATETHREAD_H

#include <QtSql>
#include <QThread>
#include <QReadWriteLock>
#include <QMap>
#include "DataMarkInternal.h"
#include "UserInternal.h"
#include "ChannelInternal.h"
#include "DataChannel.h"
#include "TimeSlotInternal.h"

class UpdateThread: public QThread
{
  Q_OBJECT

    QSharedPointer<Channels>     m_channelsContainer;
  QSharedPointer<DataMarks>    m_tagsContainer;
  QSharedPointer<common::Users>        m_usersContainer;
  QSharedPointer<TimeSlots>    m_timeSlotsContainer;
  QSharedPointer<DataChannels> m_dataChannelsMap;

  QSqlDatabase m_database;

  //will be locked when containers is being updated
  QReadWriteLock m_updateLock;

  void loadUsers(common::Users &);
  void loadTags(DataMarks &);
  void loadChannels(Channels &);
  void loadTimeSlots(TimeSlots &);
  void updateReflections(DataMarks&, common::Users&, Channels&, TimeSlots&);

  void run();

  public:
    UpdateThread(
      const QSqlDatabase &db,
      const QSharedPointer<DataMarks>& tags,
      const QSharedPointer<common::Users>& users,
      const QSharedPointer<Channels>& channels,
      const QSharedPointer<TimeSlots>& timeSlots,
      const QSharedPointer<DataChannels>& dataChannelsMap,
      QObject *parent = 0);

    void lockWriting();

    void unlockWriting();

    signals:

  public slots:

};
// UPDATETHREAD_H
#endif
