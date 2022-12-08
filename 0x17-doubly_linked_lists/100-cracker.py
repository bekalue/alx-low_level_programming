#!/usr/bin/python3

"""
since crackme4 is python bytecode, this python file will crack it

$ file crackme4
output:-  crackme4: python 3.4 byte-compiled
"""
if __name__ == "__main__":
    from importlib import import_module

    hidden_4 = import_module('crackme4')
    for name in sorted(dir(hidden_4)):
        if name[0:2] != '__':
            print('Module item - {:s}'.format(name))
    print('The password is "{}"'.format(hidden_4.ok))
