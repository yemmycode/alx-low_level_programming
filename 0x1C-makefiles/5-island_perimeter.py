#!/usr/bin/python3

"""
Module for perimeter of island
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island

    Args:
        grid (list): list of integers
    """

    num_cols = len(grid[0])  
    num_rows = len(grid)     
    perimeter = 0
    land_count = 0

    for row in range(num_rows):
        for col in range(num_cols):
            if grid[row][col] == 1:
                land_count += 1
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2

    return land_count * 4 - perimeter


grid = [[0, 1, 0, 0],
        [1, 1, 1, 0],
        [0, 1, 0, 0],
        [0, 0, 0, 0]]

perimeter = island_perimeter(grid)
print(perimeter)  
