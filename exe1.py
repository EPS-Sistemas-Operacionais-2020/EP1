import os
import signal

def parentProcess():
  print('hello world')

def childProcess():
  print('hello world')


p = os.fork()

if p == 0:
  childProcess()
  os.kill(p, signal.SIGKILL)

elif p > 0:
  parentProcess()