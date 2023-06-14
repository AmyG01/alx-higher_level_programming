#!/usr/bin/python3
def square_matrix_simple(matrix):
    result = []
    for row in matrix:
        squared_row = []
        for num in row:
            squared_num = num ** 2
            squared_row.append(squared_num)
        result.append(squared_row)
    return result
