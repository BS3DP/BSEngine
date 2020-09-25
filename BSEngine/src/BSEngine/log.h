#pragma once
#include <memory>
#include "core.h"
#include "spdlog/spdlog.h"


namespace BSEngine
{
	class BSEngine_API log
	{
	public:
		static void Init();

		inline static std::shared_ptr < spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr < spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;


	};
}
//Core Logging Macros
#define BSE_CORE_TRACE(...)   ::BSEngine::log::GetCoreLogger()->trace(__VA_ARGS__)
#define BSE_CORE_INFO(...)    ::BSEngine::log::GetCoreLogger()->info(__VA_ARGS__)
#define BSE_CORE_WARN(...)    ::BSEngine::log::GetCoreLogger()->warn(__VA_ARGS__)
#define BSE_CORE_ERROR(...)   ::BSEngine::log::GetCoreLogger()->error(__VA_ARGS__)
#define BSE_CORE_FATAL(...)   ::BSEngine::log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client Logging Macros
#define BSE_TRACE(...)        ::BSEngine::log::GetClientLogger()->trace(__VA_ARGS__)
#define BSE_INFO(...)         ::BSEngine::log::GetClientLogger()->info(__VA_ARGS__)
#define BSE_WARN(...)         ::BSEngine::log::GetClientLogger()->warn(__VA_ARGS__)
#define BSE_ERROR(...)        ::BSEngine::log::GetClientLogger()->error(__VA_ARGS__)
#define BSE_FATAL(...)        ::BSEngine::log::GetClientLogger()->fatal(__VA_ARGS__)