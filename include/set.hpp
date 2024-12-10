/** @file set.hpp
 * @brief attempting to do this assigment
 *
 * @author Hunter l williams
 * @note   class: COSC 2336, fall 2024
 * @note   ide  : VSCode Server 3.9.3, Gnu Development Tools
 * @note   assg : Assignment 13
 * @date   Dec 6th, 2024
 *
 *
 */
#ifndef SET_HPP
#define SET_HPP

#include <queue>
#include <stdexcept>

int front(const std::queue<int>& queue);
void clear(std::queue<int>& queue);
void dequeue(std::queue<int>& queue);
void enqueue(std::queue<int>& queue, int value);
void mergeQueues(std::queue<int>& queue1, const std::queue<int>& queue2);

#endif // SET_HPP