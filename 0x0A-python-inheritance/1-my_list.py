#!/usr/bin/python3
"""Defines a class that inherits from a parent class"""


class MyList(list):
    """Implements sorted printing for the built-in list class."""

    def print_sorted(self):
        """Prints the list in sorted order"""
        print (sorted(self))
