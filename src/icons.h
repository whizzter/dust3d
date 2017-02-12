#ifndef ICONS_H
#define ICONS_H

typedef enum {
  ICON_ITEM_WIDTH,
  ICON_ITEM_HEIGHT,
  ICON_ITEM_LEFT,
  ICON_ITEM_TOP,
  ICON_ITEM_TRIM_OFFSET_LEFT,
  ICON_ITEM_TRIM_OFFSET_TOP,
  ICON_ITEM_ORIGINAL_WIDTH,
  ICON_ITEM_ORIGINAL_HEIGHT,
  ICON_ITEM_MAX
} iconItem;

#define ICON_IMAGE_WIDTH  128
#define ICON_IMAGE_HEIGHT 128

typedef enum {
  ICON_UNKNOWN,
  ICON_UNLOCK,
  ICON_UNLINK,
  ICON_UNDO,
  ICON_TRASH,
  ICON_TOOL,
  ICON_STOP,
  ICON_RELOAD,
  ICON_PLUS,
  ICON_PLAY,
  ICON_PIN,
  ICON_PENCIL,
  ICON_PAUSE,
  ICON_MONITOR,
  ICON_MINUS,
  ICON_LOCK,
  ICON_LINK,
  ICON_INFO,
  ICON_IMAGE,
  ICON_FOLDER,
  ICON_FILE,
  ICON_EYEDROPPER,
  ICON_EYE,
  ICON_MAX
} iconId;

const int iconTable[ICON_MAX][ICON_ITEM_MAX];

#endif