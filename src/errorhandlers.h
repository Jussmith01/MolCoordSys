/*----------------------------------------------
        Written by Justin Smith ~September 2015
        E-Mail Jussmith48@gmail.com
        Copyright the Roitberg research group
        Chemistry Department
        University of Florida
        Gainesville FL.
------------------------------------------------*/
//________________________________________________________________________//
//      *************************************************************     //
//                      Compiler Error Handling
//      *************************************************************     //
/* Check for sufficient compiler version */
#if defined(__GNUC__) || defined(__GNUG__)
    #if !(__GNUC__ >= 4 && __GNUC_MINOR__ >= 8)
        #error "Insufficient GNU Compiler Version -- 4.8 or greater required"
    #endif
#else
    #warning "Currently only GNU compilers are supported and tested, but go ahead if you know what you're doing."
#endif

/*----------------------------------------------
                 Fatal Error
    Aborts runtime with location and _error
    text if called.
-----------------------------------------------*/
#define FatalError(_error)                            \
{                                                     \
    std::stringstream _location,_message;             \
    _location << __FILE__ << ":" << __LINE__;         \
    _message << "Error -- "+_error.str();             \
    std::cerr << "File "                              \
              << _location.str() << "\n"              \
              << _message.str() << "\n"               \
              << "Aborting!" << "\n";                 \
    exit(EXIT_FAILURE);                               \
};

/*----------------------------------------------
             Standard Error
    Checks for if an input string is empty,
    if it isnt pass the string to FatalError.
-----------------------------------------------*/
#define errorHandler(_errchk)                                \
{                                                            \
    if(!_errchk.empty())                                     \
    {                                                        \
        std::stringstream _error;                            \
        _error << std::string(_errchk);                      \
        FatalError(_error);                                  \
    }                                                        \
};

/*----------------------------------------------
               Throw Exception
    Pass the macro a char string with an error
    and throw a std::string exception.
-----------------------------------------------*/
#define throwException(_errstr)                              \
{                                                            \
    if (!std::string(_errstr).empty())                       \
    {                                                        \
        throw std::string("In Function: ")                   \
            + std::string(__FUNCTION__)                      \
            + std::string("() -- ")                          \
            + std::string(_errstr);                          \
    }                                                        \
};
