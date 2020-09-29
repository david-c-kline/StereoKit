#pragma once

namespace sk {

bool platform_init(void *from_window);
void platform_shutdown();
void platform_begin_frame();
void platform_end_frame();
void platform_present();

} // namespace sk