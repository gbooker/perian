# Moved to Github

I long hosted Perian on my own server using SVN.  I no longer used SVN for anything and I wanted to shutdown the SVN repositories on my server but I don't want Perian's source to be lost to time.  So I did a quick SVN->GIT conversion of the repositories and moved them here to Github.  I didn't bother with converting the authors from the SVN usernames (which were local to my server) to name/emails.  In the early days of the repository, we did build FFmpeg binaries and include them in the repository.  I explicitly excluded these binaries in this conversion so those cloning it won't waste space/bandwidth on these unused binaries.

## Directory Structure
I've split out the mirrors of the source for [libebml](//github.com/gbooker/perian-libebml), [libmatroska](//github.com/gbooker/perian-libmatroska), and [ffmpeg](//github.com/gbooker/perian-ffmpeg) into separate repositories.  The directory structure of SVN allowed them to be in the same repository easily but this structure is not appropriate for GIT repositories.

## Building
I've not built Perian in a long time and the process of this conversion is no exception.  It was designed for a much older version of OS X than is current so it may no longer build anymore.  If you want to attempt to build Perian, you will first need clone the aforementioned repositories as well and put all in the same directory.  You will need to remove the `perian-` prefix from the directory names when you clone the other repositories.  Then you will need to also clone [a52codec](//github.com/gbooker/a52codec) and put it as `a52codec` _within_ the `perian` directory.  Good luck.
