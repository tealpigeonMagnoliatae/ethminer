/*
 This file is part of ethminer.

 ethminer is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 ethminer is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with ethminer.  If not, see <http://www.gnu.org/licenses/>.
*/


/*

    A watchdog for the ethminer


    * get informed about some events (pool connection)
    * query periodic subitted solutions and hashrate !

    What should it check ?
       - Last new job from pool
                As ETH block time is about 14sec (should go up to 30sec) we should get at least
                every 30 sec a new job Multiply with 10 ==> 300sec
                see also: https://etherscan.io/chart/blocktime
                Solution: Switch to next pool or reset connection
       - Last successfull submitted share (honor is_paused)
       - Last successfull submitted share (per card) (honor is_paused)
       - Calculated/Reported hashrate per card (honor is_paused)
       - check farm.stop() [sometimes a miner thread does not return and stop() never returns]
*/


#include "watchdog.h"

using namespace std;
using namespace dev;
using namespace eth;

WatchDog::WatchDog() {}
void WatchDog::start() {}
void WatchDog::stop() {}


/* vim:set ts=4 et: */
