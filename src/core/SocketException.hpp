#include <string>

class SocketException
{
public:
  SocketException(std::string s) : m_s(s) {}
  ~SocketException()
  {
    // std::cout<<"sokectException 析构函数"<< std::endl;
  }

  std::string description() { return m_s; }

private:
  std::string m_s;
};
