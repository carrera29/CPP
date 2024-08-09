/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 09:34:35 by pollo             #+#    #+#             */
/*   Updated: 2024/08/09 18:01:35 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>

int main(void) {

    MutantStack<int> myStack;
    myStack.push(4);
    myStack.push(42);
    myStack.push(424);
    
    if (myStack.empty()) std::cout << "st is empty" << std::endl;
    else std::cout << "st is not empty" << std::endl;
    
    MutantStack<int> myCopy = myStack;
    myStack.pop();

    std::cout << "Top element in myStack is " << myStack.top() << " and the size is " << myStack.size() << std::endl;
    std::cout << "Top element in myCopy is " << myCopy.top() << " and the size is " << myCopy.size() << std::endl;
    
    myStack.swap(myCopy);

    std::cout << "Top element in myStack is " << myStack.top() << " and the size is " << myStack.size() << std::endl;
    std::cout << "Top element in myCopy is " << myCopy.top() << " and the size is " << myCopy.size() << std::endl;
    
    myStack.push(7);
    myStack.push(77);
    myStack.push(777);

    MutantStack<int>::iterator End = myStack.end();
    for (MutantStack<int>::iterator it = myStack.begin(); it != End; ++it)
        std::cout << *it << std::endl;
    
    return 0;
}