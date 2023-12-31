//////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2023 $organization$
///
/// This software is provided by the author and contributors ``as is''
/// and any express or implied warranties, including, but not limited to,
/// the implied warranties of merchantability and fitness for a particular
/// purpose are disclaimed. In no event shall the author or contributors
/// be liable for any direct, indirect, incidental, special, exemplary,
/// or consequential damages (including, but not limited to, procurement
/// of substitute goods or services; loss of use, data, or profits; or
/// business interruption) however caused and on any theory of liability,
/// whether in contract, strict liability, or tort (including negligence
/// or otherwise) arising in any way out of the use of this software,
/// even if advised of the possibility of such damage.
///
///   File: mutex.hpp
///
/// Author: $author$
///   Date: 6/19/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_LOGGER_MUTEX_HPP
#define XOS_LOGGER_MUTEX_HPP

#include "xos/mt/os/mutex.hpp"

namespace xos {
namespace logger {

/// class mutext
template <class TExtends = mt::os::mutex, class TImplements = typename TExtends::implements>
class exported mutext: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef mutext derives;

    /// constructor / destructor
    mutext(const mutext& copy): extends(copy) {
    }
    mutext(): extends(false) {
    }
    virtual ~mutext() {
    }
}; /// class mutext
typedef mutext<> mutex;

} /// namespace logger
} /// namespace xos

#endif /// ndef XOS_LOGGER_MUTEX_HPP
