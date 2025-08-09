// user_session.h
#ifndef USER_SESSION_H
#define USER_SESSION_H

#include <QString>

class UserSession {
public:
    static UserSession& instance(){
    static UserSession instance;
        return instance;}

    // Data members for session information
    int patientId = -1;
    int userId = -1;
    QString email;

    QString firstname;
    QString lastname;

    // Now defined inline to prevent linker errors
    void clearSession() {
        patientId = -1;
        userId = -1;
        email.clear();
        firstname.clear();
        lastname.clear();
    }

private:
    UserSession() = default;
    ~UserSession() = default;
    UserSession(const UserSession&) = delete;
    UserSession& operator=(const UserSession&) = delete;
};

#endif // USER_SESSION_H
