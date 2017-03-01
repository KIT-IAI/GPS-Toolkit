#pragma once

#include <exception>

namespace gps
{
	class Exception : public std::exception
	{
	public:
		Exception(int err) : m_err(err) {}
		virtual ~Exception() {}

		int getErr() const { return m_err; }

		virtual const char* what() const { return ""; }

	private:
		int m_err;
	};
}

