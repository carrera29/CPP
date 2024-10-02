/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:47:31 by pollo             #+#    #+#             */
/*   Updated: 2024/10/02 12:32:18 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main(void) {
    
    Data originalData;
    originalData.intValue = 42;
    originalData.floatValue = 24.42f;
    originalData.doubleValue = 42.24;
    originalData.charValue = 'A';

    uintptr_t serialized = Serializer::serialize(&originalData);
    std::cout << "Puntero serializado: " << serialized << std::endl;

    Data* deserializedData = Serializer::deserialize(serialized);
    std::cout << "Puntero deserializado: " << deserializedData << std::endl;

    std::cout << "intValue: " << deserializedData->intValue << std::endl;
    std::cout << "floatValue: " << deserializedData->floatValue << std::endl;
    std::cout << "doubleValue: " << deserializedData->doubleValue << std::endl;
    std::cout << "charValue: " << deserializedData->charValue << std::endl;

    return 0;
}
