#pragma once

namespace DX3D
{
	class Base
	{
		public:
			Base();
			virtual ~Base();

	protected:
		Base(const Base&) = delete;
		Base(Base&&) = delete;
		Base& operator=(const Base&) = delete;
		Base& operator=(Base&&) = delete;
	};
} // namespace DX3D