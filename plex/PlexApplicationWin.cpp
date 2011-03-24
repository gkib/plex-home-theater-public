/*
 *  PlexApplicationWin.cpp
 *  Plex
 *
 *  Created by Jamie Kirkpatrick on 20/01/2011.
 *  Copyright 2011 Plex Inc. All rights reserved.
 *
 */

#include "PlexApplicationWin.h"
#include "winsparkle.h"

////////////////////////////////////////////////////////////////////////////////
PlexApplicationWin::PlexApplicationWin()
{	
  win_sparkle_set_appcast_url("www.plexapp.com/appcast/win/plex.xml");
  win_sparkle_init();	// calling this hangs everything some way down the line!!!!
}

////////////////////////////////////////////////////////////////////////////////
PlexApplicationWin::~PlexApplicationWin()
{
  win_sparkle_cleanup();
}
