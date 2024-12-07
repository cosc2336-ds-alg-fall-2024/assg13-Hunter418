/** @file QueueException.hpp
 * @brief Header file for Queue exception classes.
 *
 * This file defines custom exception classes for handling errors in Queue operations.
 *
 * @note   class: COSC 2336, Fall 2024
 * @note   ide  : VSCode Server 3.9.3, Gnu Development Tools
 * @note   assg : Assignment STL
 * @date   December 6, 2024
 *
 * Declares exception classes QueueEmptyException and QueueOperationException.
 */
#ifndef QUEUE_EXCEPTION_HPP
#define QUEUE_EXCEPTION_HPP

#include <stdexcept>
#include <string>

/**
 * @brief Exception class for handling errors related to empty queue operations.
 */
class QueueEmptyException : public std::exception
{
private:
  std::string message; ///< Message describing the exception
public:
  explicit QueueEmptyException(const std::string& message);
  virtual ~QueueEmptyException();
  virtual const char* what() const throw();
};

/**
 * @brief Exception class for handling errors related to invalid queue operations.
 */
class QueueOperationException : public std::exception
{
private:
  std::string message; ///< Message describing the exception
public:
  explicit QueueOperationException(const std::string& message);
  virtual ~QueueOperationException();
  virtual const char* what() const throw();
};

#endif // QUEUE_EXCEPTION_HPP
