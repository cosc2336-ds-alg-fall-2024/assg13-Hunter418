/** @file assg-tests.cpp
 * @brief Unit tests for Assignment Classes: practice on classes and user
 *   defined types.
 *
 * @author Derek Harter
 * @note   class: COSC 2336, Summer 2021
 * @note   ide  : VS Code Server 3.9.3 and Gnu/Make build tools
 * @note   assg : Assignment STL
 * @date   December 7, 2021
 *
 * Assignment Standard Template Library STL.
 */
#include "QueueException.hpp"
#include "catch.hpp"
#include "set.hpp"
#include <iostream>
#include <list>
#include <queue>

using namespace std;

/** Task 1 example test task.  Demonstarte using an STL list
 * container.
 */
TEST_CASE("<list> test list STL container", "[task1]")
{
  // list of integers
  list<int> l1;

  // list should be initially empty
  CHECK(l1.empty());

  // add item, it is now not empty
  l1.push_front(5);
  CHECK_FALSE(l1.empty());
  CHECK(l1.size() == 1);
}
TEST_CASE("Test front() function")
{
  std::queue<int> q;

  enqueue(q, 10);
  enqueue(q, 20);
  enqueue(q, 30);

  CHECK(front(q) == 10); // Front of the queue should be 10

  clear(q);
  CHECK_THROWS_AS(front(q), QueueEmptyException); // Front on an empty queue should throw
}

TEST_CASE("Test enqueue() function")
{
  std::queue<int> q;

  enqueue(q, 10);
  enqueue(q, 20);

  CHECK(front(q) == 10); // Front of the queue should still be 10
  CHECK(q.size() == 2);  // Queue size should be 2
}

TEST_CASE("Test dequeue() function")
{
  std::queue<int> q;

  enqueue(q, 10);
  enqueue(q, 20);

  dequeue(q);
  CHECK(front(q) == 20); // Front of the queue should now be 20

  dequeue(q);
  CHECK(q.empty()); // Queue should be empty

  CHECK_THROWS_AS(dequeue(q), QueueEmptyException); // Dequeue on an empty queue should throw
}