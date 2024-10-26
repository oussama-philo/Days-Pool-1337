#!/bin/sh
ls -l | awk 'NB % 2 == 1'
