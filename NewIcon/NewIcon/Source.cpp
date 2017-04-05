#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
int main() {
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_BITMAP *icon = NULL;

	al_init();
	al_init_image_addon();

	display = al_create_display(640, 480);

	al_clear_to_color(al_map_rgb(10, 50, 70));

	icon = al_load_bitmap("unnamed.png");

	al_set_display_icon(display, icon);
	
	al_rest(20.0);
	al_flip_display();
	al_destroy_display(display);

	return 0;
}

