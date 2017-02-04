#!/usr/bin/env python
# -*-coding=utf-8 -*-
d = ""
for i in range(0,1000000):
	d = d + str(i)
print int(d[1]) * int(d[10]) * int(d[100]) * int(d[1000]) * int(d[10000]) * int(d[100000]) * int(d[1000000])