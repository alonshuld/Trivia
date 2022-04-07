#include <exception>
#include <string>

class dataBaseException : public std::exception
{
public:
	dataBaseException(const std::string& message) : m_message(message) {}
	virtual ~dataBaseException() noexcept = default;
	virtual const char* what() const noexcept { return m_message.c_str(); }

protected:
	std::string m_message;
};