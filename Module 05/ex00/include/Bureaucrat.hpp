#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat {
    public:
        d sd;

public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
};

#endif
