/*
 * synergy -- mouse and keyboard sharing utility
 * Copyright (C) 2002 Chris Schoeneman
 * 
 * This package is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * found in the file COPYING that should have accompanied this file.
 * 
 * This package is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef CTCPLISTENSOCKET_H
#define CTCPLISTENSOCKET_H

#include "IListenSocket.h"
#include "IArchNetwork.h"

//! TCP listen socket
/*!
A listen socket using TCP.
*/
class CTCPListenSocket : public IListenSocket {
public:
	CTCPListenSocket();
	~CTCPListenSocket();

	// ISocket overrides
	virtual void		bind(const CNetworkAddress&);
	virtual void		close();

	// IListenSocket overrides
	virtual IDataSocket*	accept();

private:
	CArchSocket			m_socket;
};

#endif
