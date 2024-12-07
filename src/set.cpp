/** @file set.cpp
 * @brief attempting to do this assigment
 *
 * @author Hunter l Williams
 * @note   class: COSC 2336, fall 2024
 * @note   ide  : VSCode Server 3.9.3, Gnu Development Tools
 * @note   assg : Assignment 13
 * @date   Dec 6th, 2024
 *
 *
 */
#include "QueueException.hpp"
#include <iostream>
#include <queue>
#include <set.hpp>
#include <stdexcept>
#include <vector>
using namespace std;

/**
 * @brief Front accesor
 *
 *  Retrieves the element at the front of the queue without removing it.
 *
 *  @param queue The queue from which the front element will be retrieved
 *
 *  @returns The value of the element at the front of the queue
 *
 */
int front(const std::queue<int>& queue)
{
  if (!queue.empty())
  {
    return queue.front();
  }
  else
  {
    throw QueueEmptyException("Queue is empty. Cannot access front.");
  }
}

/**
 * @brief Clear out the queue
 *
 * Clear or empty out the queue.  Return the queue back
 * to an empty queue.
 *
 * @param queue The queue to be cleared of all elements.
 *
 * @returns Nothing, because it is a void function.\
 *
 */
void clear(std::queue<int>& queue)
{
  while (!queue.empty())
  {
    queue.pop();
  }
}

/**
 * @brief Dequeue
 *
 * Removes the front element from the queue, as long as the queue isn't empty.
 *
 * @param queue The queue from which the front element will be removed
 *
 * @returns nothing because it is a void function
 *
 */
void dequeue(std::queue<int>& queue)
{
  if (!queue.empty())
  {
    queue.pop();
  }
  else
  {
    throw QueueEmptyException("Queue is empty. Cannot dequeue.");
  }
}
/**
 * @brief equeue
 *
 * inserts an item to the back of the queue
 *
 * @param queue The queue where the new element will be added.
 *
 * @param value The value to be added to the back of the queue.
 *
 * @returns nothing because it is a void function
 *
 */
void enqueue(std::queue<int>& queue, int value)
{
  queue.push(value);
}

/**
 * @brief Merge two queues
 *
 * Appends all elements from the second queue to the first queue.
 *
 * @param queue1 The first queue
 * @param queue2 The second queue
 *
 * @returns Nothing, because it is a void function.
 */
void mergeQueues(std::queue<int>& queue1, const std::queue<int>& queue2)
{
  queue<int> tempQueue = queue2;

  while (!tempQueue.empty())
  {
    queue1.push(tempQueue.front());
    tempQueue.pop();
  }
}
