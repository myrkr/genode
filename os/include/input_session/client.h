/*
 * \brief  Client-side input session interface
 * \author Norman Feske
 * \date   2006-08-16
 */

/*
 * Copyright (C) 2006-2013 Genode Labs GmbH
 *
 * This file is part of the Genode OS framework, which is distributed
 * under the terms of the GNU General Public License version 2.
 */

#ifndef _INCLUDE__INPUT_SESSION__CLIENT_H_
#define _INCLUDE__INPUT_SESSION__CLIENT_H_

#include <input_session/capability.h>
#include <base/rpc_client.h>

namespace Input {

	struct Session_client : Genode::Rpc_client<Session>
	{
		explicit Session_client(Session_capability session)
		: Genode::Rpc_client<Session>(session) { }

		Genode::Dataspace_capability dataspace() {
			return call<Rpc_dataspace>(); }

		bool is_pending() const {
			return call<Rpc_is_pending>(); }

		int flush() {
			return call<Rpc_flush>(); }
	};
}

#endif /* _INCLUDE__INPUT_SESSION__CLIENT_H_ */
