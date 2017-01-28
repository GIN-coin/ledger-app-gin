#ifndef __BTCHIP_BAGL_H__

#define __BTCHIP_BAGL_H__

// btchip asking the UI
unsigned int btchip_bagl_confirm_full_output(void);

// UI response to btchip to finish the exchange
void btchip_bagl_user_action(unsigned char confirming);

// Public key display 
unsigned int btchip_bagl_display_public_key(void);
void btchip_bagl_user_action_display(unsigned char confirming);

// request the UI to redisplay the idle screen
void btchip_bagl_idle(void);

// btchip asking message signing confirmation
void btchip_bagl_confirm_message_signature(void);

// UI response to message signature
void btchip_bagl_user_action_message_signing(unsigned char confirming);

#endif
