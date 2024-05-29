#!/usr/bin/python3
"""Define island perimeter measuring fun"""


def island_perimeter(grid):
    """Calculate the perimeter of the island

    Args:
        grid (2D list): a list of list of integers

    Returns:
        the perimeter
    """
    edges = 0
    size = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                size += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edges+=1
    perimeter = size * 4 - edges * 2           
    return perimeter




    
