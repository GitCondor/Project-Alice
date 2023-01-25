#include "system_state.hpp"

#ifndef UNICODE
#define UNICODE
#endif
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN

#include <Windows.h>
#include "Objbase.h"

#pragma comment(lib, "Ole32.lib")

int WINAPI wWinMain(
	HINSTANCE /*hInstance*/,
	HINSTANCE /*hPrevInstance*/,
	LPWSTR /*lpCmdLine*/,
	int /*nCmdShow*/
) {

#ifdef _DEBUG
	HeapSetInformation(NULL, HeapEnableTerminationOnCorruption, NULL, 0);
#endif

	SetThreadDpiAwarenessContext(DPI_AWARENESS_CONTEXT_PER_MONITOR_AWARE_V2);

	if(SUCCEEDED(CoInitializeEx(NULL, COINIT_APARTMENTTHREADED))) {
		// do everything here: create a window, read messages

		std::unique_ptr<sys::state> game_state = std::make_unique<sys::state>(); // too big for the stack

		assert(sizeof(GAME_DIR) > size_t(4)); // If this fails, then you have not set your GAME_FILES_DIRECTORY CMake cache variable
		add_root(game_state->common_fs, NATIVE(".")); // will add the working directory as first root -- for the moment this lets us find the shader files
		add_root(game_state->common_fs, NATIVE_M(GAME_DIR)); // game files directory is overlaid on top of that

		window::create_window(*game_state, window::creation_parameters());

		CoUninitialize();
	}
	return 0;
}