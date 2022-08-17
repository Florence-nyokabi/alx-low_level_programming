#!/usr/bin/python3
"""island_perimeter function"""


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""

    per = 0
    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                per += 4
                if row > 0 and grid[row-1][column] == 1:
                    per -= 1
                if column > 0 and grid[row][column-1] == 1:
                    per -= 1
                if column < (len(grid[row])-1) and grid[row][column+1] == 1:
                    per -= 1
                if row < (len(grid)-1) and grid[row+1][column] == 1:
                    per -= 1
    return (per)
