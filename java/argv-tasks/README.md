<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://github.com/sosy-lab/sv-benchmarks

SPDX-FileCopyrightText: 2025 The SV-Benchmarks Community

SPDX-License-Identifier: Apache-2.0
-->

[ARG-V](https://arg-v.dev) was used to collect, filter, and modify these benchmarks automatically.
Please direct any inquiries to Dr. Robert Dyer (rdyer@unl.edu) and Dr. Elena Sherman (elenasherman@boisestate.edu)

Benchmarks in this repository came from a variety of repositories:


### [bc-java](https://github.com/bcgit/bc-java/blob/2aeb19f832252e2dc6817f472738f03f0446e451/core/src/main/java/org/bouncycastle/crypto/BufferedBlockCipher.java) project:

BufferedBlockCipher


### [hebcal-java](https://github.com/hebcal/hebcal-java/blob/ccf9c4b464c6314bef41eede3b404e7ad8a72e85/src/main/java/net/sf/hebcal/HebrewDate.java) project:

HebrewDate


### [netty](https://github.com/twitter/netty-http2/blob/e8df896db61045b118f3423196c41c11c162b1c0/src/main/java/com/twitter/http2/HttpConnectionHandler.java) project:

HttpConnectionHandler


### [nxt-remote-control](https://github.com/jfedor2/nxt-remote-control/blob/166ca09c0a7e1eea629d95f1a1eefefbe1ba631c/src/org/jfedor/nxtremotecontrol/TouchPadView.java) project:

TouchPadView


### [plugins-source-google-iap-v3](https://github.com/coronalabs/plugins-source-google-iap-v3/blob/52868507158208d046ea990a6251c72a959dfc76/android/plugin/src/main/java/plugin/google/iap/v3/util/Base64.java) project:

Base64


### [SlidingMenu](https://github.com/jfeinstein10/SlidingMenu/blob/4254feca3ece9397cd501921ee733f19ea0fdad8/library/src/com/jeremyfeinstein/slidingmenu/lib/CustomViewAbove.java) project:

CustomViewAbove


### [okhttp](https://github.com/square/okhttp/tree/dd82416bc5b6c45d4aeecd6acdc0f178eb4ac841) project:

HttpTransport

SpdyStream

StrictLineReader

Base

DistinguishedNameParser

HPack


### [JFXControls](https://github.com/stefanil/JFXControls/blob/6fde5ad91e2b3ef132d5422bd4df1d990ff28a55/src/main/java/org/devel/jfxcontrols/scene/control/skin/animation/VelocityTracker.java):

VelocityTracker


### [Google volley](https://github.com/google/volley/tree/20b215734ff1964013caa19e3c9aa44f3922611f) project:

DiskBasedCache

ImageRequest


### [activecheck](https://github.com/frederikhappel/activecheck/blob/9b6bc134d807f2a504c10a11071796797a3a2a61/activecheck-server/src/main/java/org/activecheck/Activecheck.java) project:

ActiveCheck


### [achartengine](https://github.com/ddanny/achartengine/blob/1eb1c8160a5f186eed7c1c5876e9922019a4db97/achartengine/src/org/achartengine/chart/TimeChart.java) project:

TimeChart


## Versioning and config

### Version:

[ARG-V 1.0.0](https://github.com/unl-pal/argv-transformer/releases/tag/v1.0.0) with manual changes adding assert statement conditions.



### Config used (ARG-V config.properties file):

csv=[dataset.csv](https://github.com/unl-pal/argv-transformer/commit/b3626cb81ad36d34fc8b9118f3cb29ca0e6eb42a)

projectCount=50

maxLoc=10000

minLoc=100

downloadDir=database

benchmarkDir=benchmarks

transformAll=true

debugLevel=2

type=I

minExpr=3

minIfStmt=1

minParams=0

target=SVCOMP

