

import pandas as pd
import numpy as np
import arff
import sys
import datetime
import os
import csv


outfile_name = sys.argv[1]
outfile = open(outfile_name, 'w')

string = ""

for x in range(1,200):
    string += 'a'
for x in range(1,200):
    string += 'b'
for x in range(1,200):
    string += 'c'
for x in range(1,200):
    string += 'd'
for x in range(1,200):
    string += 'e'
for x in range(1,200):
    string += 'f'
for x in range(1,200):
    string += 'g'
for x in range(1,200):
    string += 'h'
outfile.write(string)
outfile.close()
