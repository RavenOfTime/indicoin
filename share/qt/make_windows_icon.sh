#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/indicoin.ico

convert ../../src/qt/res/icons/indicoin-16.png ../../src/qt/res/icons/indicoin-32.png ../../src/qt/res/icons/indicoin-48.png ${ICON_DST}
