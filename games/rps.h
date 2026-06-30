#pragma once

#include <array>
#include <cstddef>
#include <cstdint>

namespace RPS
{

enum class Action : uint8_t
{
	ROCK,
	PAPER,
	SCISSORS,
};

constexpr auto NUM_ACTIONS = size_t{3};

struct StrategyNode
{
	std::array<float, NUM_ACTIONS> mStrategy;
};

struct GameState
{
	static constexpr bool IsTerminal()
	{
		return true;
	};
};

}; // namespace RPS
