#pragma once
#include <memory>
#include <cstdint>

namespace zstl
{
	template<typename T, typename Allocator = std::allocator<T>>
	class TVector
	{
	public:
		using value_type = T;
		using reference = T&;
		using const_reference = const T&;
		using allocator_type = Allocator;
		using pointer = typename Allocator::pointer;
		using const_pointer = typename Allocator::const_pointer;
		using size_type = int32_t;

		TVector()
			: _allocator{ Allocator() }
		{
		}

		//reference operator[](size_type index);
		//const_reference operator[](size_type index) const;

		//void Resize(size_type n);

		[[nodiscard]] pointer Data() noexcept { return _begin; }
		[[nodiscard]] const_pointer Data() const noexcept { return _begin; }

		[[nodiscard]] bool IsEmpty() const noexcept { return _begin == _end; }
		[[nodiscard]] size_type Size() const noexcept { return static_cast<size_type>(_end - _begin); }

	private:
		Allocator _allocator;
		pointer _begin{ nullptr };
		pointer _end{ nullptr };
	};
}