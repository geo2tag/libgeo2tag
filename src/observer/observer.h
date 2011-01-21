#ifndef OBSERVER_H
#define OBSERVER_H

#include <QDialog>
#include "ui_ObserverForm.h"
#include "RSSFeedQuery.h"
#include "LoginQuery.h"
#include <QStatusBar>
#include <QStringList>
#include <QString>

class Observer : public QDialog
{
    Q_OBJECT;
    Ui::Form           m_ui;
    // last user login
    QString m_lastLogin;
    // dataMarks
    QSharedPointer<DataMarks> m_marks;
    //optimal scale
    int m_optScale;
    double m_optB;
    double m_optL;
    GUI::RSSFeedQuery  *rssFeedQuery;
    GUI::LoginQuery *loginQuery;
public:

    Observer();

signals:
    void dataMarksGotten(QSharedPointer<DataMarks>& marks);
public slots:
    void tokenRecieved(QString status,QString auth_token);
    void updateData(QSharedPointer<DataMarks>& marks);
    void showAllMarks();
    void buttonPushed();
    void doRequest();
};

#endif // OBSERVER_H
