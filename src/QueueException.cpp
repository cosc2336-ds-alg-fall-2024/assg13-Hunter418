/** @file QueueException.cpp
 * @brief Implement Exceptions that can be thrown by Queue instances.
 *
 * This file defines exception classes for handling errors such as attempting to
 * access or modify an empty queue, or other invalid operations involving the queue.
 *
 * @note   class: COSC 2336, Fall 2024
 * @note   ide  : VSCode Server 3.9.3, Gnu Development Tools
 * @note   assg : Assignment STL
 * @date   December 6, 2024
 *
 * Implements all exception methods that can be generated and thrown by Queue
 * instances.
 */
#include "QueueException.hpp"
#include <string>
using namespace std;

/**
 * @brief QueueEmptyException constructor
 *
 * Constructor for exceptions used when an operation is attempted on an empty queue.
 *
 * @param message The exception message thrown when an error occurs.
 */
QueueEmptyException::QueueEmptyException(const string& message)
{
  this->message = message;
}

/**
 * @brief QueueEmptyException destructor
 *
 * Destructor for the QueueEmptyException class.
 */
QueueEmptyException::~QueueEmptyException() {}

/**
 * @brief QueueEmptyException message accessor
 *
 * Accessor method to retrieve the message describing the exception.
 *
 * @returns const char* Returns a const old-style C character array message for
 *   display/use by the process that catches this exception.
 */
const char* QueueEmptyException::what() const throw()
{
  return message.c_str();
}

/**
 * @brief QueueOperationException constructor
 *
 * Constructor for exceptions used when an invalid operation is performed on a queue.
 *
 * @param message The exception message thrown when an error occurs.
 */
QueueOperationException::QueueOperationException(const string& message)
{
  this->message = message;
}

/**
 * @brief QueueOperationException destructor
 *
 * Destructor for the QueueOperationException class.
 */
QueueOperationException::~QueueOperationException() {}

/**
 * @brief QueueOperationException message accessor
 *
 * Accessor method to retrieve the message describing the exception.
 *
 * @returns const char* Returns a const old-style C character array message for
 *   display/use by the process that catches this exception.
 */
const char* QueueOperationException::what() const throw()
{
  return message.c_str();
}
