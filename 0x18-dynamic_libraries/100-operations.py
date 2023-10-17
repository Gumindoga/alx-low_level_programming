import ctypes

cops = ctypes.CDLL('./100-operations.so')

def add(a, b):
  return cops.add(a, b)

def sub(a, b):
  return cops.sub(a, b)

def mul(a, b):
  return cops.mul(a, b)

def div(a, b):
  return cops.div(a, b)
