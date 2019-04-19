//
//  main.c
//  SHPractice-FFmpeg
//
//  Created by Shine on 2019/4/19.
//  Copyright © 2019 shine. All rights reserved.
//

#include <stdio.h>
#include <libavutil/log.h>
#include <libavformat/avformat.h>

int main(int argc, const char * argv[]) {
    
    int ret;
    av_log_set_level(AV_LOG_INFO);
    AVFormatContext *fmt_ctx = NULL;
    ret = avformat_open_input(&fmt_ctx, "/Users/shine/iOS学习练习/SHPractice-FFmpeg/SHPractice-FFmpeg/test.mp4", NULL , NULL);
    if(ret < 0){
        av_log(NULL, AV_LOG_ERROR, "Can't open file \n");
    }
    
    av_dump_format(fmt_ctx, 0, "./test.mp4", 0);
    avformat_close_input(&fmt_ctx);
    return 0;
}
