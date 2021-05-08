if (cch.find("action|dailyrewardmenu") == 0)
{
						auto p2 = packetEnd(appendString(appendString(createPacket(), "OnDailyRewardRequest"), "set_default_color|`o\nadd_label_with_icon|big|`wBlock De Mayo|left|9616|\nset_default_color|`o\nadd_image_button||interface/large/gui_shop_buybanner.rttex|bannerlayout|flag_frames:4,1,3,0|flag_surfsize:512,200|\nadd_smalltext|`7Get involved and get rewards!`` Smash an Ultra Pinata once a day during `5Cinco de Mayo Week`` and get a daily reward!|left|\nadd_spacer|small|\nadd_button|claimbutton|Come Back Later|noflags|0|0|\nadd_countdown||center|disable|\nadd_quick_exit|"));
						auto respawnTimeout = 500;
						auto deathFlag = 0x19;
						memcpy(p2.data + 24, &respawnTimeout, 4);
						memcpy(p2.data + 56, &deathFlag, 4);
						const auto packet2 = enet_packet_create(p2.data, p2.len, ENET_PACKET_FLAG_RELIABLE);
						enet_peer_send(peer, 0, packet2);
						delete p2.data;
}