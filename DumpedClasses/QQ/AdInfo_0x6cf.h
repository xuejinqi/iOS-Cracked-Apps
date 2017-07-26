//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AdInfo_0x6cf : NSObject
{
    int _int32_kd_pos;
    int _int32_product_type;
    unsigned int _uint32_ad_type;
    unsigned int _uint32_cost_type;
    unsigned int _enum_ad_layout;
    unsigned int _uint32_ad_material_id;
    unsigned int _uint32_ad_material_width;
    unsigned int _uint32_ad_material_height;
    unsigned int _uint32_dis_channel;
    unsigned int _uint32_duration;
    unsigned long long _uint64_channel_id;
    NSString *_bytes_cl;
    NSString *_bytes_img;
    NSString *_bytes_img_s;
    NSString *_bytes_txt;
    NSString *_bytes_desc;
    NSString *_bytes_rl;
    NSString *_bytes_apurl;
    NSString *_bytes_trace_id;
    NSString *_bytes_product_id;
    NSArray *_rpt_msg_inner_ad_info;
    NSString *_bytes_landing_page;
    NSString *_bytes_price;
    NSString *_bytes_button_txt;
    NSString *_bytes_view_id;
    NSString *_bytes_customized_invoke_url;
    NSString *_bytes_corporation_name;
    NSString *_bytes_corporate_image_name;
    NSString *_bytes_corporate_logo;
    unsigned long long _uint64_ad_uin;
    NSString *_bytes_ext;
    NSString *_bytes_video_url;
    NSString *_bytes_title_list;
    NSString *_bytes_image_list;
    NSString *_bytes_url_list;
    unsigned long long _uint64_aid;
    NSString *_bytes_via;
    NSString *_bytes_button_url;
}

@property(nonatomic) unsigned int uint32_duration; // @synthesize uint32_duration=_uint32_duration;
@property(copy, nonatomic) NSString *bytes_button_url; // @synthesize bytes_button_url=_bytes_button_url;
@property(nonatomic) unsigned int uint32_dis_channel; // @synthesize uint32_dis_channel=_uint32_dis_channel;
@property(copy, nonatomic) NSString *bytes_via; // @synthesize bytes_via=_bytes_via;
@property(nonatomic) unsigned int uint32_ad_material_height; // @synthesize uint32_ad_material_height=_uint32_ad_material_height;
@property(nonatomic) unsigned int uint32_ad_material_width; // @synthesize uint32_ad_material_width=_uint32_ad_material_width;
@property(nonatomic) unsigned int uint32_ad_material_id; // @synthesize uint32_ad_material_id=_uint32_ad_material_id;
@property(nonatomic) unsigned int enum_ad_layout; // @synthesize enum_ad_layout=_enum_ad_layout;
@property(nonatomic) unsigned long long uint64_aid; // @synthesize uint64_aid=_uint64_aid;
@property(copy, nonatomic) NSString *bytes_url_list; // @synthesize bytes_url_list=_bytes_url_list;
@property(copy, nonatomic) NSString *bytes_image_list; // @synthesize bytes_image_list=_bytes_image_list;
@property(copy, nonatomic) NSString *bytes_title_list; // @synthesize bytes_title_list=_bytes_title_list;
@property(nonatomic) unsigned int uint32_cost_type; // @synthesize uint32_cost_type=_uint32_cost_type;
@property(copy, nonatomic) NSString *bytes_video_url; // @synthesize bytes_video_url=_bytes_video_url;
@property(copy, nonatomic) NSString *bytes_ext; // @synthesize bytes_ext=_bytes_ext;
@property(nonatomic) unsigned long long uint64_ad_uin; // @synthesize uint64_ad_uin=_uint64_ad_uin;
@property(copy, nonatomic) NSString *bytes_corporate_logo; // @synthesize bytes_corporate_logo=_bytes_corporate_logo;
@property(copy, nonatomic) NSString *bytes_corporate_image_name; // @synthesize bytes_corporate_image_name=_bytes_corporate_image_name;
@property(copy, nonatomic) NSString *bytes_corporation_name; // @synthesize bytes_corporation_name=_bytes_corporation_name;
@property(copy, nonatomic) NSString *bytes_customized_invoke_url; // @synthesize bytes_customized_invoke_url=_bytes_customized_invoke_url;
@property(copy, nonatomic) NSString *bytes_view_id; // @synthesize bytes_view_id=_bytes_view_id;
@property(copy, nonatomic) NSString *bytes_button_txt; // @synthesize bytes_button_txt=_bytes_button_txt;
@property(copy, nonatomic) NSString *bytes_price; // @synthesize bytes_price=_bytes_price;
@property(copy, nonatomic) NSString *bytes_landing_page; // @synthesize bytes_landing_page=_bytes_landing_page;
@property(retain, nonatomic) NSArray *rpt_msg_inner_ad_info; // @synthesize rpt_msg_inner_ad_info=_rpt_msg_inner_ad_info;
@property(nonatomic) unsigned int uint32_ad_type; // @synthesize uint32_ad_type=_uint32_ad_type;
@property(nonatomic) int int32_product_type; // @synthesize int32_product_type=_int32_product_type;
@property(copy, nonatomic) NSString *bytes_product_id; // @synthesize bytes_product_id=_bytes_product_id;
@property(copy, nonatomic) NSString *bytes_trace_id; // @synthesize bytes_trace_id=_bytes_trace_id;
@property(copy, nonatomic) NSString *bytes_apurl; // @synthesize bytes_apurl=_bytes_apurl;
@property(copy, nonatomic) NSString *bytes_rl; // @synthesize bytes_rl=_bytes_rl;
@property(copy, nonatomic) NSString *bytes_desc; // @synthesize bytes_desc=_bytes_desc;
@property(copy, nonatomic) NSString *bytes_txt; // @synthesize bytes_txt=_bytes_txt;
@property(copy, nonatomic) NSString *bytes_img_s; // @synthesize bytes_img_s=_bytes_img_s;
@property(copy, nonatomic) NSString *bytes_img; // @synthesize bytes_img=_bytes_img;
@property(copy, nonatomic) NSString *bytes_cl; // @synthesize bytes_cl=_bytes_cl;
@property(nonatomic) int int32_kd_pos; // @synthesize int32_kd_pos=_int32_kd_pos;
@property(nonatomic) unsigned long long uint64_channel_id; // @synthesize uint64_channel_id=_uint64_channel_id;
- (void).cxx_destruct;
- (unsigned int)getAdShowStyle;
- (id)description;

@end

